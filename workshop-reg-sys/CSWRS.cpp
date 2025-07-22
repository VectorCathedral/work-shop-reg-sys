#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <numeric>


std::string name;
int num_of_parts;
std::string file_path = "C:\\Users\\user\\source\\repos\\FTOS\\workshops.txt";
std::string ws_out_file= "C:\\Users\\user\\source\\repos\\FTOS\\workshop_out.txt";
std::vector<std::pair<std::string, int>> classes;
int linenum = 1;
std::vector<std::string> participants;
int course;
std::vector<int> reg_cost;
std::ifstream file(file_path);
std::ofstream output(ws_out_file);
std::string line;
int y = 0;

int main() {
	 

	std::cout << "Welcome to Sonke Sivukile Workshop!"<<std::endl;
	std::cout << std::endl;

	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string item;
		std::string price_str;

		if (std::getline(ss, item, ',') && std::getline(ss, price_str)) {
			int price = std::stoi(price_str);
			classes.emplace_back(item, price);
		}

	}
	file.close();
	for (const auto& p : classes) {
		std::cout << linenum << "." << p.first << " - R" << p.second << '\n';
		linenum++;
	}

	std::cout << "Number of participants ?(If it is just you ,enter 1):";
	std::cin >> num_of_parts;

	for (int i = 0; i < num_of_parts ; i++) {
		std::cout<< "Please enter participant" <<" " << i + 1 << "'s" << " " << "name:";
		std::cin >> name;
		participants.push_back(name);

	}
	std::cout << std::endl;

	for (int x = 0; x < participants.size(); x++)
	{
		
		while (true) {
			std::string response;
			std::cout << "Workshop course for " << participants[x] << " (Please enter line number of course):";
			std::cin >> course;
			reg_cost.push_back(classes[course-1].second);
			output << participants[x] << "-" << classes[course - 1].first << std::endl;

			std::cout << "Add another course for "<<participants[x]<<" ?(yes/no): ";
			std::cin >> response;
			std::cout<<std::endl;

			if (response == "no" || response == "No") {
				output << std::endl;
				break;

			}

			std::cout << std::endl;
			 

		}
		 
		
	}	
	int total = std::accumulate(reg_cost.begin(), reg_cost.end(), 0);
	float discount;
	 
	if (participants.size() >= 3 and total >300) {
		discount = total * 0.10;
	}
	else {
		discount = 0;
	}
	std::cout << "------Final Bill------" << "\n";
	std::cout << "Bill Summary :" << "R" << total << std::endl;
	std::cout << "Discount :" << "R" << discount << std::endl;
	std::cout << "Total:" << "R" << total - discount << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;








	return 0;
}
