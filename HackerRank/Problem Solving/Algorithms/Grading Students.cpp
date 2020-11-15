
vector<int> gradingStudents(vector<int> grades)
{
  for (int i = 0; i < grades.size(); i++)
  {
    int mark = grades[i];
    if (mark > 37)
    {
      if ((mark % 5) > 2)
      {
        mark += (5 - (mark % 5));
      }
      grades[i] = mark;
    }
  }
  return grades;
}
