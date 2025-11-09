class Student:
    def __init__(self, name, student_number):
        self.name = name
        self.student_number = student_number
        self.classes = []
    
    def enrol(self, course_running):
        self.classes.append(course_running)
        course_running.add_student(self)

class department:
    def __init__(self, name, department_code):
        self.name = name
        self.department_code = department_code
        self.course = {}
    
    def add_course(self, description, course_code, credits):
        self.course[course_code] = Course(
            description, course_code, credits, self.name)
        return self.course [course_code]

class Course:
    def __init__(self, description, course_code, credits, department):
        self.description = description
        self.course_code = course_code
        self.credits = credits
        self.department = department
        self.running = []
    
    def add_running(self, year):
        self.running.append(CourseRunning(self, year))
        return self.running[-1]

class CourseRunning:
    def __init__(self, course, year):
        self.course = course
        self.year = year
        self.student = []
    
    def add_student(self, student):
        self.student.append(student)

electrical_engineering = department("Electrical Engineering", "TKE")
print(electrical_engineering.course)
TKE191226 = electrical_engineering.add_course(
    "Algorithm and Data Structures", "TKE191226", 1)
TKE191226_2020 = TKE191226.add_running(2020)