void bonAppetit(vector<int> bill, int k, int b)
{
  int amount = 0;
  for (size_t i = 0; i < bill.size(); i++)
  {
    amount += bill[i];
  }
  amount -= bill[k];
  if (amount / 2 == b)
  {
    cout << "Bon Appetit";
  }
  else
  {
    cout << (b - (amount) / 2);
  }
}
