#include "Test.h"
void testStation()
{
	Station s("Marasti", "A");
	assert(s.getArea() == "A");
	assert(s.getName() == "Marasti");
	Station t("Memorandumului", "A");
	assert(t.getArea() == "A");
	ifstream in("Station.txt");
	in >> s;
	assert(s.getArea() == "D");
	Station u("", "");
	in >> u;
	assert(u.getArea() == "B");
	in >> t;
	assert(t.getName() == "Floresti");
}
void testRepo()
{
	Repo<Station> rs;
	rs.readEntity("Station.txt");
	assert(rs.getAll().back().getArea() == "A");
	assert(rs.getAll().front().getName() == "Manastur");
	assert(rs.getAll()[2].getArea() == "C");
}


void testTicket() {
	Ticket ticket(2, "A", 12234, "Observator", "Floresti");
	assert(ticket.getPrice() == 2);
	assert(ticket.getArea() == "A");
	assert(ticket.getCode() == 12234);
	assert(ticket.getStation1() == "Observator");
	assert(ticket.getStation2() == "Floresti");
	ticket.setArea("B");
	assert(ticket.getArea() == "B");
}
void testUser() {
	Ticket ticket1(2, "A", 12234, "Observator", "Floresti");
	Ticket ticket2(3, "B", 34353, "Feleacu", "Floresti");
	vector<Ticket> v;
	v.push_back(ticket1);
	v.push_back(ticket2);
	User user("Ana", "ana", v);
	assert(user.getName() == "Ana");
	assert(user.getPassword() == "ana");
	assert(user.getListTicket(0) == v[0]);
	assert(user.getListTicket(1) == v[1]);
}
void testBus() {
	Bus b1 = Bus(25, 14, 15, {"Manastur" , "Fabrica de bere"});
	Bus b2 = Bus(1, 15, 35, {"Apahida","Marasti"});
	assert(b1.getNr() == 25);
	assert(b2.getHour() == 15);
}