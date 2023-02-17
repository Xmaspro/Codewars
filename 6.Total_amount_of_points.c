// Our football team has finished the championship.

// Our team's match results are recorded in a collection of strings. Each match is represented by a string in the format "x:y", where x is our team's score and y is our opponents score.

// For example: ["3:1", "2:2", "0:1", ...]

// Points are awarded for each match as follows:

// if x > y: 3 points (win)
// if x < y: 0 points (loss)
// if x = y: 1 point (tie)
// We need to write a function that takes this collection and returns the number of points our team (x) got in the championship by the rules given above.

/* solution 1 */
int points(const char* const games[10]) {
  int sum = 0;
  for (int i = 0; i < 10; i++){
    if (games[i][0] > games[i][2]) sum += 3;
    if (games[i][0] == games[i][2]) sum += 1;
    if (games[i][0] > games[i][2]) sum += 0;
  }
  return sum;

}

/* solution 2 */
int points(const char* const games[10]) {
  int sum = 0;
  for (int i = 0; i < 10; i++){
  games[i][0] > games[i][2]? sum += 3:
  games[i][0] == games[i][2]? sum += 1:
  0;
    }
  return sum;
}