import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    unique_salaries = employee['salary'].drop_duplicates()
    header = f'getNthHighestSalary({N})'

    if N <= 0 or len(unique_salaries) < N:    
        return pd.DataFrame({header: [None]})
    
    n_value = unique_salaries.nlargest(N).iloc[-1]

    return pd.DataFrame({header: [n_value]})