

#include <iostream>
#include <cstring>
using namespace std;

//supervisor class
class Supervisor
{
private:
	int supervisor_id;
	string supervisor_name;
	string email_address;
	int permission_id;
	int	permission_date;
	double salary;

public:
	int ViewProfile();
	Supervisor(int S_ID, double sal, char sup_name[]);
	void ViewWorkersInquiries();
	int SendRequest();

};
//stock class
class Stock  {
protected:
	int stock_id;
	string  stock_items;
	int stock_date;
	string stock_type;
	string stock_details;

public:
	Stock(int stockID, string stock_date, string stockItems, string stockType[]);
	void AddStock();
	void UpdateStock();
	void DeleteStock();
	void SearchStock();
	void ViewAvailableStock();
	void ViewDamagedStock();
	int Request();


};

//workers class
class Workers {

private:

	int worker_id;
	string worker_name;
	string worker_email;
	int role_id;

public:
	void ViewProfile();
	void ViewJobRole();
	int SendInquiries();


	Workers(int workerId, string workerName, string workerEmail);

};
//Supervisor implementation
Supervisor::Supervisor() {

}
 Supervisor::Supervisor(int S_ID, double sal, char sup_name[]) {
	supervisor_id = S_ID;
	salary = sal;
	
}

 void Supervisor::ViewWorkersInquiries() { }

 //stock implementation

 Stock::Stock() {}
 Stock::Stock(int stockID, string stock_date, string  stockItems, string stockType) {
	 stock_id = stockID;
	
 }
 void Stock::AddStock() {}
 void Stock::UpdateStock() {}
 void Stock::DeleteStock() {}
 void Stock::SearchStock() {}
 void Stock::ViewAvailableStock() {}
 void Stock::ViewDamagedStock(){}

 //workers implementation
 Workers::Workers() {}
 Workers::Workers(int workerId, string workerName,string workerEmail) {
	 worker_id = workerId;
	 worker_name = workerName;
	 worker_email = workerEmail;
	 void ViewProfile();
	 void ViewJobRole();
		 

 }

 //Main Program
 int main() {
	 Workers (1,"GG","abc");
	 Stock (01, "clothes", "ribbons");
	 Supervisor (1, 10000, "smith");

	 return 0;
 }

