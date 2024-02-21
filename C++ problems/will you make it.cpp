bool zero_fuel(int distance_to_pump, int mpg, int fuel_left)
{
  return fuel_left * mpg >= distance_to_pump;
}