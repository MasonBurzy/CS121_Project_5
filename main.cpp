# include <iostream>
# include <fstream>
# include <sstream>

int main() {

	std::stringstream converter;	
	std::string sNum1, sNum2, text;
	int num1, num2;

	std::string currentLine;
	std::fstream file("data.csv");
	while (getline(file, currentLine)) {
		converter.clear();
		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text);
		
		converter.clear();
		converter.str("");
		converter << sNum1 << " " << sNum2;
		converter >> num1 >> num2;

		int sum = num1 +  num2;

		for (int i = 0; i < sum; i++) {
			std::cout << text << " ";
		}
		
		std::cout << std::endl;

		// std::cout << currentLine << std::endl;
	}



	return 0;



}
