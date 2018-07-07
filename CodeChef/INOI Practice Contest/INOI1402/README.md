# Free ticket | Problem Code: INOI1402

[Link to challenge](https://www.codechef.com/INOIPRAC/problems/INOI1402)

Goal:

Some dude has won the contest and he is entitled to a free ticket
between any two destinations served by the airline. All cities served
by Drongo Airlines can be reached from each other by some sequence of
connecting flights. Nikhil is allowed to take as many connecting flights
as needed, but he must take the cheapest route between his chosen destinations.

Each direct flight between two cities has a fixed price. All pairs of
cities connected by direct flights have flights in both directions
and the price is the same in either direction. The price for a
sequence of connecting flights is the sum of the prices of the direct
flights along the route.

We would like to maximize the value of the prize, so we would like
to choose a pair of cities on the network for which the cost of
the cheapest route is as high as possible.

## Input:

* Line 1 : Two space-separated integers, C and F . C is the number of cities on the network, numbered 1, 2, . . . , C. F is the number of pairs of cities connected by a direct flight.
* Lines 2 to F + 1 : Each line describes one direct flight between a pair of cities and consists of three integers, x, y and p, where x and y are the two cities connected by this flight and p is the price of this


For all direct flights, x ƒ= y and no pair of cities is connected by more than one direct flight.
If there is a direct flight from x to y with price p, there is also a flight from y to x with price p and exactly one of these two will be listed.

## Output:
The output consists of a single integer,
the maximum cost among the cheapest routes
between all pairs of cities across the airline’s network.
