/* geodist.h */
#ifndef GEODIST_H
#define GEODIST_H

/* Define the radius of the earth in nautical miles. */
#define EARTH_RADIUS 3440.065

/* Public Interface */
int geodist(double lat1, double lon1, double lat2, double lon2, double *d);

#endif
