# 🚀 Git Tips and Tricks – For Personal DSA Workflow

This file contains common Git commands, best practices, and real-life fixes I've learned while managing this DSA repository.

---

## 📁 Branching Strategy

- ✅ Create topic-based branches like `string`, `array`
- ✅ Keep `main` clean and production-ready
- ✅ Avoid committing directly to `main`

```bash
git checkout -b string       # create and switch to string branch
git checkout main            # switch to main
git branch                   # to check current branch

```

---
## 🔄 Daily Workflow

1. Work on topic branch (string)

2. Push daily commits

3. At end of day, create PR to merge into main

4. Use Squash and Merge to keep main branch clean

```
git push origin string
# Go to GitHub → Pull Requests → Create PR → Squash and Merge
```

## 🧠 Fixing Accidental Work on Wrong Branch

1. I wrote code on wrong branch like(main) but it have to be on string branch

```
git stash -u            # stash untracked files too
git checkout string     # switch to correct branch
git stash pop           # apply changes
```
2. When i push code on string branch for many days in squash and merge.
```
git checkout main # switch to main branch on local
git pull origin main # update local with remote
git checkout string(branch name) # checkout to string/branch name
git rebase main # rebase string branch with updated local main
git push --force-with-lease # push rebased string to remote
```
3. One day i mistakely commit on recurion branch but i do soft delete and then stash 
```
git reset --soft HEAD~1
git stash -u
git checkout recursion
git stash pop

```
4. If the work on a branch is done then delete that branch locally and remotely.
```
git checkout main 
git branch -d branch-name  # Delete locally (if fully merged)
git push origin --delete branch-name  # Delete remotely


```
## 📤 Keeping Local Main Updated

After PR is merged to main on GitHub:
```
git checkout main
git pull origin main
```

## 🧑‍💻 Author

<div align="center">

### **Satyendra Gautam**  
🌱 *"Every problem I solve here reflects growth, grit, and grit over glam."*

🚀 *DSA Enthusiast • Self-Driven Developer • Git & GitHub Practitioner*

[![GitHub](https://img.shields.io/badge/GitHub-@satyendragautam901-181717?style=for-the-badge&logo=github)](https://github.com/satyendragautam901)

📬 *Feel free to explore my journey and daily progress.*  
📘 *Each commit represents consistent effort toward mastering problem-solving and real-world development tools.*

</div>

