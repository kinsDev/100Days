/**
 * The following table shows the daily flights from one city to another:
Departure time  -  Arrival time
8:00 a.m.          10:16 a.m.
9:43 a.m.          11:52 a.m.
11:19 a.m.         1:31 p.m.
12:47 p.m.         3:00 p.m.
2:00 p.ra.         4:08 p.m.
3:45 p.m.          5:55 p.m.
7:00 p.m.          9:20 p.m.
9:45 p.m.          11:58 p.m.

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
hour clock). The program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
the departure times, also expressed in minutes since midnight. For example. 13:15 is 13 x
60+ 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
midnight) than to any of the other departure times.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, minutes;
    int timeInMinutes, closestDeparture, closestArrival;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hours, &minutes);

    timeInMinutes = hours * 60 + minutes;

    // Departure and arrival times in minutes since midnight
    int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[] = {616, 712, 811, 900, 1008, 1175, 1280, 1438};

    int minDiff = abs(departures[0] - timeInMinutes);
    int numFlights = sizeof(departures) / sizeof(departures[0]);

    for (int i = 1; i < numFlights; i++)
    {
        int diff = abs(departures[i] - timeInMinutes);

        if (diff < minDiff)
        {
            minDiff = diff;
            closestDeparture = departures[i];
            closestArrival = arrivals[i];
        }
    }

    int closestDepHours = closestDeparture / 60;
    int closestDepMinutes = closestDeparture % 60;
    int closestArrHours = closestArrival / 60;
    int closestArrMinutes = closestArrival % 60;

    printf("Closest departure time is %02d:%02d, arriving at %02d:%02d.\n", closestDepHours,
           closestDepMinutes, closestArrHours, closestArrMinutes);

    return 0;
}
