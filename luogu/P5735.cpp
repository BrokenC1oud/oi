#include <cmath>
#include <cstdio>

double distance(float p1[], float p2[]) {
  return sqrt((p1[0] - p2[0]) * (p1[0] - p2[0]) +
              (p1[1] - p2[1]) * (p1[1] - p2[1]));
}

int main() {
  float points[3][2];
  for (int i = 0; i < 3; i++) {
    scanf("%f %f", &points[i][0], &points[i][1]);
  }
  double dist = distance(points[0], points[1]) +
                distance(points[0], points[2]) + distance(points[1], points[2]);
  printf("%.2f\n", dist);

  return 0;
}
