from input_module import enter_employee_data
from salary_module import calculate_monthly_salary

employees = {}


def add_employee():
    name, data = enter_employee_data()
    employees[name] = data


def display_employee_names_recursive(employees_list, index=0):
    if index < len(employees_list):
        print(employees_list[index])
        display_employee_names_recursive(employees_list, index + 1)


def main():
    while True:
        choice = input(
            "1. Додати співробітника \n 2. Показати зарплату \n 3. Вивести імена співробітників \n 4. Вихід \n Вибір: ")

        if choice == "1":
            add_employee()
        elif choice == "2":
            name = input("Ім'я співробітника для виводу зарплати: ")
            if name in employees:
                print(f"Зарплата співробітника {name}: {calculate_monthly_salary(employees[name])}")
            else:
                print("Співробітника з таким ім'ям не знайдено.")
        elif choice == "3":
            display_employee_names_recursive(list(employees.keys()))
        elif choice == "4":
            break
        else:
            print("Невідома команда.")


if __name__ == "__main__":
    main()
