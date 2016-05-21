# github_practice
yokami

https://github.com/framgia/coding-standards/blob/master/ja/git/flow.md

## 初心者向け

$ git checkout master

$ git pull

$ git checkout [自分のブランチ]

$ git reset --hard master


ここで編集

$ git add -A

$ git commit -m "コミットメッセージ"

$ git push -f


その後　プルリクエストを送る


## 理想のWorkFlow

$ git checkout master

$ git pull

$ git checkout [自分のブランチ]

$ git rebase master

 編集作業
 
$ git add -A

$ git commit -m "コミットメッセージ"

$ git checkout master

$ git pull

$ git checkout [自分のブランチ]

$ git rebase master

$ git push

## 初心者向けと、理想の違い

+ pull requestの時にconflictが起きにくい
+ rebase はreset --hardと違いconflictが起きる可能性があるのでちゃんと解決してね
+ push時にconflictが起きる可能性がなくはないかもしれない

## Conflictの解消

#### rebase
> When you have resolved this problem, run "git rebase --continue".

> If you prefer to skip this patch, run "git rebase --skip" instead.

> To check out the original branch and stop rebasing, run "git rebase --abort".

conflictした時は最後にこんな感じのメッセージが出ると思います。


$ git status

や rebase時のメッセージから、修正すべきファイルを確認しましょう

その後viなどでいい感じに編集できたら

$ git add -A

$ git rebase --continue

Applying: コミットメッセージ

みたいな表示が出れば大丈夫

そうでなければ

$ git status

からやり直し

#### push時のconflict
> $ git push

> To git@github.com:FOSS-B-team/github_practice.git

>  ! [rejected]        tkbtk-kic -> tkbtk-kic (non-fast-forward)

みたいな感じで失敗することがあると思います。

その時の対処法

+ 強制プッシュ

$ git push -f

で強制プッシュ

+ 丁寧にmergeさせる

$ git pull

するとconflict解消モードみたいになります

$ git status

でファイル確認して編集

$ git add +A

$ git commit  (コミットコメントはデフォルトでつく)

$ git push

で解決するだろう　多分
