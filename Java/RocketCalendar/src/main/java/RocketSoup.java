/*
 * This is a webscraping application that prints a rocket
 * launch calendar to a terminal. This calender may not
 * be accurate but is from spaceflightnow.com
 *
 * Author: Evan Colwell
 * Date: 10/21/2020
 *
 */

//Jsoup imports (handled through maven)
import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;

import java.io.IOException;
import java.util.LinkedList;

public class RocketSoup {

    private static Document sfn;

    public static void main(String[] args){
        try{
            sfn = getWebsite();
            LinkedList<String> schedule = getSchedule(sfn);
            printSchedule(schedule);
        } catch(IOException e){
            System.err.println("Error: Cannot connect to the Spaceflightnow website. Please try again later...");
        }
    }

    public static String getMission(Element web){

        String launchDate = web.select("span.launchdate").text();
        String mission = web.select("span.mission").text();
        String schedule = launchDate+"\n"+mission;
        return schedule;

    }

    public static String getMissionData(Element web){

        String missionData = web.select("div.missiondata").text() + "\n";
        return missionData;

    }

    public static String getDescription(Element web){

        String missionDescription = web.select("div.missdescrip").text() + "\n";
        return missionDescription;

    }

    public static LinkedList<String> getSchedule(Document web){

        LinkedList<String> schedule = new LinkedList<String>();
        int i = 1;
        for(Element launch : web.select("div.entry-content.clearfix div.datename, div.missiondata, div.missdescrip")){
            if(schedule.isEmpty() || schedule.size() % 3 == 0){
                schedule.addLast(getMission(launch));
            } else if(schedule.size() % 3 == 1){
                schedule.addLast(getMissionData(launch));
            } else {
                schedule.addLast(getDescription(launch));
            }
        }
        return schedule;
    }

    public static void printSchedule(LinkedList<String> schedule){
        for(int i = 0; i < schedule.size(); i++){
            System.out.println(schedule.get(i));
        }
    }


    private static Document getWebsite() throws IOException {
        return Jsoup.connect("https://spaceflightnow.com/launch-schedule/").get();
    }
}
