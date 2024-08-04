def selection_sort_iterative(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        print("Array at each stage:", arr)
    return arr

def selection_sort_recursive(arr, n, index=0):
    if index == n:
        return arr
    min_idx = index
    for j in range(index + 1, n):
        if arr[j] < arr[min_idx]:
            min_idx = j
    arr[index], arr[min_idx] = arr[min_idx], arr[index]
    print("Array at each stage:", arr)
    return selection_sort_recursive(arr, n, index + 1)

# Function to get input from the user
def get_user_input():
    user_input = input("Enter numbers separated by spaces: ")
    arr = list(map(int, user_input.split()))
    return arr

# Main function
def main():
    print("Selection Sort")
    arr = get_user_input()

    choice = input("Choose the type of selection sort (1 for iterative, 2 for recursive):\n")
    if choice == "1":
        print("Using Iterative Selection Sort")
        sorted_arr = selection_sort_iterative(arr)
    elif choice == "2":
        print("Using Recursive Selection Sort")
        sorted_arr = selection_sort_recursive(arr, len(arr))
    else:
        print("Invalid choice. Using Iterative Selection Sort by default.")
        sorted_arr = selection_sort_iterative(arr)

    print("Sorted array:", sorted_arr)

if __name__ == "__main__":
    main()
