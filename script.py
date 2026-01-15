import os
import random
import subprocess
from datetime import datetime, timedelta

# Correct path
os.chdir("/Users/sanskriti/100 days of dsa/100-days-code-challenge")

start_date = datetime(2026, 1, 15)
end_date = datetime(2026, 3, 23)

current = start_date

while current <= end_date:
    commits_today = random.randint(1, 5)
    print(f"{current.date()} -> {commits_today} commits")

    for _ in range(commits_today):
        commit_time = current.replace(
            hour=random.randint(9, 23),
            minute=random.randint(0, 59),
            second=random.randint(0, 59)
        )

        date_str = commit_time.strftime("%Y-%m-%d %H:%M:%S")

        # Ensure file changes every time
        with open("log.txt", "a") as f:
            f.write(date_str + "\n" + str(random.random()) + "\n")

        subprocess.run(["git", "add", "."], check=True)

        env = os.environ.copy()
        env["GIT_AUTHOR_DATE"] = date_str
        env["GIT_COMMITTER_DATE"] = date_str

        subprocess.run(
            ["git", "commit", "-m", "update"],
            env=env,
            check=True
        )

    current += timedelta(days=1)

print("DONE")