string angryProfessor(int k, vector<int> a)
{
  int total = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] <= 0)
      total++;
  }
  cout << total << endl;
  if (total >= k)
    return "NO";
  else
    return "YES";
}
