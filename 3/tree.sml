(*node contains value followed by 2 trees*)
datatype tree = empty | node of 'a* 'a tree * 'a tree

(*return list*)
fun insert empty x = node(num, empty, empty)
	| insert x (node(num, left, right)) =
		if x < num
			then node(num, insert x left, right)
		else node(num, left, insert x right)

(*return bool*)
fun member empty x = false
	| member x (node(num, left, right)) =
		if x < num
			then member x left
		else if x > num
			then member x right
		else true

(*TODO: add build function shown in class*)
