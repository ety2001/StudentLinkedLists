// Student.h

class Student{
	private:
		char first[20];
		char last[20];
		int id;
		float gpa;
	public:
		char* getFirst();
		char* getLast();
		int getId();
		float getGpa();
};
