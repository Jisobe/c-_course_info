#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	private:

		string courseNumber;
		string courseTitle;

	public:

		void SetCourseNumber(const string courseNumber);
		void SetCourseTitle(const string courseTitle);

		string GetCourseNumber() const;
		string GetCourseTitle() const;
		void PrintInfo() const;

};

#endif