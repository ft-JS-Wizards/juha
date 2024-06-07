all:
	git subtree pull --prefix=algorithm git@github.com:42ps/juha.git main
push:
	git subtree push --prefix=algorithm git@github.com:42ps/juha.git main
