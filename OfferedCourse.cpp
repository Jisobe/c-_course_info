#include "OfferedCourse.h"

  void OfferedCourse::SetInstructorName(const string instructorName){
    this->instructorName = instructorName;
  };

  void OfferedCourse::SetLocation(const string location){
    this->location = location;
  };

  void OfferedCourse::SetClassTime(const string classTime){
    this->classTime = classTime;
  };

  string OfferedCourse::GetInstructorName() const {return this->instructorName;};

  string OfferedCourse::GetLocation() const { return this->location;};

  string OfferedCourse::GetClassTime() const { return this->classTime;};
