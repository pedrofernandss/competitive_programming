import pandas as pd


def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    ans = customers[~customers['id'].isin(orders['customerId'])][['name']]
    ans.columns = ['Customers']
    ans_df = pd.DataFrame(ans)

    return ans_df