# RocketCalendar

A Java JSoup program that prints out an upcoming schedule of rocket launches to the terminal. This program uses JSoup as a dependency but is handled by Maven.

## AUTHOR
Evan C.

## USAGE

To run the program, you need Maven and you need to run the following:

``` mvn exec:java -Dexec.mainClass=RocketSoup ```

## DEPENDENCIES

This project uses JSoup, but is handled by the Maven package manager. The latest version of Maven is needed.

Run the following in the directory with the POM.xml:

``` mvn clean package ``` 

## ABOUT

This is a webscraping application that takes the schedule from SpaceFlightNow.com and prints it to the console/terminal. This will also catch errors if it can not connect to the website.
