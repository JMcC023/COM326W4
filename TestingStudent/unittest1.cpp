#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{		
	TEST_CLASS(TestModule)
	{
	public:
		
		TEST_METHOD(TesModuleCustomConstr)
		{
			// Arrange
			Module a{ "OOP", "COM326", 20, 89 };
			std::string expected{"OOP COM326 20 89"};
			std::string actual{};

			// Act
			
			actual =  a.getModuleTitle() + " " + a.getModuleCode() + " " + std::to_string(a.getModuleCreditPoints()) + " " + std::to_string(a.getModuleMark());

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetModuleCode)
		{
			// Arrange
			Module a{ "OOP", "COM326", 20, 89 };
			std::string expected{ "COM326" };
			std::string actual{};
			// act
			actual = a.getModuleCode();
			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCode)
		{
			// Arrange
			Module a{ "OOP", "COM326", 20, 89 };
			std::string expected{ "COM326" };
			std::string actual{};
			// act
			a.setModuleCode("COM326");
			actual = a.getModuleCode();
			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetModuleCreditPoints)
		{
			// Arrange
			Module a{ "OOP", "COM326", 20, 89 };
			int expected{ 20 };
			int actual{};
			// act
			actual = a.getModuleCreditPoints();
			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCreditPoints)
		{
			// Arrange
			Module a{ "OOP", "COM326", 20, 89 };
			std::string expected{ 20 };
			std::string actual{};
			// act
			a.setModuleCreditPoints(20);
			actual = a.getModuleCreditPoints();
			// assert
			Assert::AreEqual(expected, actual);
		}
	};

	TEST_CLASS(TestStudent) {

		TEST_METHOD(StudentConstructor) {
			// arrange
			Student stu1{ "Jason McCandless", "B00736969", "BSc Computer Science", 2 };
			std::string expected{ "Jason McCandless B00736969 BSc Computer Science 2" };
			std::string actual{};

			actual = stu1.GetName() + " " + stu1.GetRegistrationID() + " " + stu1.GetCourse() + " " + std::to_string(stu1.GetYearofStudy());

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestAddModule)
		{
			// Arrange
			Module m = { "OOP", "COM326", 20, 89 };
			Student stu1{ "Jason McCandless", "B00736969", "BSc Computer Science", 2 };

			std::string expected{ "OOP COM326 20 89" };
			std::string actual{};

			// act
			actual = std::to_string(stu1.AddModule(Module (m)));
		}

		TEST_METHOD(TestAddModule)
		{
			// Arrange
			Module m = { "OOP", "COM326", 20, 89 };
			Student stu1{ "Jason McCandless", "B00736969", "BSc Computer Science", 2 };
			
			std::string expected{ "OOP COM326 20 89" };
			std::string actual{};
			
			// act
			actual = stu1.AddModule(m);


		}
	};
}