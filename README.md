# RestartLeetCode

重新开始 LeetCode 刷题，记录解题思路、代码和复习笔记。

## 仓库地址

- GitHub：https://github.com/ly1611240037/RestartLeetCode
- Gitee：https://gitee.com/ly1611240037/restart-leet-code

## 推荐目录结构

```text
RestartLeetCode/
├── README.md
├── Array/
├── LinkedList/
├── String/
├── DynamicProgramming/
└── ...
```

可以按照题目类型或难度创建目录，并在每道题中记录代码和思路。

## 提交并同步到两个仓库

```bash
git add .
git commit -m "解决第 XXX 题"
git push origin master
git push gitee master
```

其中：

- `origin` 是 GitHub 远程仓库
- `gitee` 是 Gitee 远程仓库

以后每次写完题目，执行一次 `git add` 和 `git commit`，再分别执行两条 `git push` 命令即可。

## 查看远程仓库

```bash
git remote -v
```
