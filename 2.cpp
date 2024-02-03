#include<iostream>

struct account{
bool exists;
std::string nickname;
int id;
std::string pass;
std::string email;
};

void printAccount(int id);
	if(storage[id].exists){
		std::cout << storage[id].nickname << std::endl;
		std::cout << storage[id].id << std::endl;
		std::cout << storage[id].pass << std::endl;
                std::cout << storage[id].email << std::endl;
	}
}

void createAccount(int id, std::string nickname, std::string pass, std::string email){
	storage[id].exists = true;
	storage[id].id = id;
	storage[id].nickname = nickname;
	storage[id].pass = pass;
	storage[id].email = email;
}
void deleteAccount(int id, std::string nickname, std::string pass, std::string email){
	storage[id].exists = false;
}

void changeInfo(int id, std::string nickname, std::string pass, std::string email){
        storage[id].exists = true;
        storage[id].id = id;
        storage[id].nickname = nickname;
        storage[id].pass = pass;
        storage[id].email = email;
}

void

void

int main(){
	//std::cout << 2;
	account storage[100];
	for(int i = 0; i < 100: i ++){
		storage[i].exists = false;
	}
	return 0;
}
