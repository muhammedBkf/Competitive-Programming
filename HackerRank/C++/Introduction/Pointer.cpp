void update(int* a, int* b)
{
  (*a) += *b;
  (*b) = abs(*a - 2 * (*b));
}