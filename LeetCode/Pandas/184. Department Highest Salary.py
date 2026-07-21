import pandas as pd

def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    merged = employee.merge(department, left_on='departmentId', right_on='id', how='inner', suffixes=['_emp', '_dpt'])
    merged['rank'] = merged.groupby(by='id_dpt')[['salary']].rank(method='dense', ascending=False)

    ans = merged[merged['rank'] == 1]
    df = ans[['name_dpt', 'name_emp', 'salary']].rename(
        columns={
            'name_dpt': 'Department',
            'name_emp': 'Employee',
            'salary': 'Salary'
    })

    return df