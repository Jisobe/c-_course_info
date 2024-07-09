#include "Course.h"

		void Course::SetCourseNumber(const string courseNumber){
			this->courseNumber = courseNumber;
		};

		void Course::SetCourseTitle(const string courseTitle){
			this->courseTitle = courseTitle;
		};

		string Course::GetCourseNumber() const { return courseNumber; };
		string Course::GetCourseTitle() const { return courseTitle; };

		void Course::PrintInfo() const {
			cout << "Course Information" << endl;
			cout << "   Course Number: " << GetCourseNumber() << endl;
			cout << "   Course Title: " << GetCourseTitle() << endl;
		};
