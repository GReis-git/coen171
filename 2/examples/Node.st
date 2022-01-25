Object subclass: #Node
    instanceVariableNames: 'data link'
    classVariableNames: ''
    poolDictionaries: ''
    category: 'examples'!


!Node class methodsFor: 'instance creation'!
data: anObject
    ^self new initialize: anObject
!!


!Node methodsFor: 'access'!
data					"data accessor"
    ^data
!

link					"link accessor"
    ^link
!

initialize: anObject			"data mutator"
    data := anObject
!

linkTo: aNode				"link mutator"
    link := aNode
!!
