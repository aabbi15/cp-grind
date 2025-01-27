import os
import shutil
from datetime import datetime

def sort_files_by_month_and_date(source_folder):
    """
    Organize files in the specified folder into subfolders by month-year and then by date-day.

    Args:
    - source_folder (str): The folder containing the files to organize.
    """
    # Ensure the folder exists
    if not os.path.exists(source_folder):
        print(f"Error: The folder '{source_folder}' does not exist.")
        return

    # Loop through files in the folder
    for filename in os.listdir(source_folder):
        file_path = os.path.join(source_folder, filename)
        
        # Skip directories
        if not os.path.isfile(file_path) or not filename.endswith('.cpp'):
            continue

        # Get the creation date of the file
        creation_time = os.path.getctime(file_path)
        creation_date = datetime.fromtimestamp(creation_time)

        # Format month-year and date-day folder names
        month_year_folder = creation_date.strftime('%B-%Y')  # e.g., "October-2024"
        date_day_folder = creation_date.strftime('%d-%A')    # e.g., "12-Tuesday"

        # Create the month-year folder
        month_year_path = os.path.join(source_folder, month_year_folder)
        os.makedirs(month_year_path, exist_ok=True)

        # Create the date-day subfolder inside the month-year folder
        date_day_path = os.path.join(month_year_path, date_day_folder)
        os.makedirs(date_day_path, exist_ok=True)

        # Move the file into the appropriate subfolder
        shutil.move(file_path, os.path.join(date_day_path, filename))
        print(f"Moved '{filename}' to '{date_day_path}'")

    print("Sorting complete!")

# Specify the folder to organize
source_folder = "."
sort_files_by_month_and_date(source_folder)
