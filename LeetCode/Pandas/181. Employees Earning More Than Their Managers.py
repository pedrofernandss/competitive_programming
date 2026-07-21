import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    merged = pd.merge(employee, employee, left_on='managerId', right_on='id', suffixes=('_employee', '_manager'))
    results = merged[merged['salary_employee'] > merged['salary_manager']]
    results.rename(columns={'name_employee': 'Employee'}, inplace=True)
    return results[['Employee']]
