int main()
{
  double height{};
  std::cout << "height(m)" << "\n";
  std::cin >> height;
  double mass{};
  std::cout << "mass(kg)" << "\n";
  std::cin >> mass;

  double bmi =  mass / (height * height);
  std::cout << "bmi: " << bmi << "\n";

  auto status = [](double bmi)
  {
    if (bmi < 18.5) return "Underweight.\n";
    else if (bmi < 25.0) return "Normal.\n";
    else if (bmi < 30.0) return "Overweight.\n";
    else return "Obese.\n";
  };

  std::cout << status(bmi);

  return 0;
}
