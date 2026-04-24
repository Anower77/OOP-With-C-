import os
import re

folder_name = "Chapter - 10"
num_new_files = 5  

template = """ // test
"""

# Ensure folder exists
os.makedirs(folder_name, exist_ok=True)

existing_numbers = []

for file in os.listdir(folder_name):
    match = re.match(r"Ex-(\d+)\.cpp$", file)
    if match:
        existing_numbers.append(int(match.group(1)))

start = max(existing_numbers) + 1 if existing_numbers else 1

for i in range(start, start + num_new_files):
    file_name = f"Ex-{i:02}.cpp"
    file_path = os.path.join(folder_name, file_name)

    if not os.path.exists(file_path):  # avoid overwrite
        with open(file_path, "w") as f:
            f.write(template)

print(f"Added {num_new_files} new files starting from Ex-{start:02}.cpp")




# #include <iostream>
# using namespace std;
# class test {
# };
# int main (){   
#     return 0;
# }