#include <iostream>
#include <cmath>

using namespace std;

const double RADIUS_OF_EARTH_KM = 6371.0;

double toRadians(double degree) {
    return degree * M_PI / 180.0;
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = toRadians(lat1);
    lon1 = toRadians(lon1);
    lat2 = toRadians(lat2);
    lon2 = toRadians(lon2);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlon / 2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return RADIUS_OF_EARTH_KM * c;
}

int main() {
    
    double lat1, lon1, lat2, lon2;
    cout << "Input the latitude of coordinate 1: ";
    cin >> lat1;

    cout << "Input the longitude of coordinate 1: ";
    cin >> lon1;

    cout << "Input the latitude of coordinate 2: ";
    cin >> lat2;

    cout << "Input the longitude of coordinate 2: ";
    cin >> lon2;

    double distance = calculateDistance(lat1, lon1, lat2, lon2);
    cout << "The distance between points : " << distance << " km" << endl;

    return 0;
}

