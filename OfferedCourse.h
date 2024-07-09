#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	
	private:

		string instructorName;
		string location;
		string classTime;

	public:

		void SetInstructorName(const string instructorName);
		void SetLocation(const string location);
		void SetClassTime(const string classTime);

		string GetInstructorName() const;
		string GetLocation() const;
		string GetClassTime() const;
};

#endif