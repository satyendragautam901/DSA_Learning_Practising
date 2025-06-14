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

