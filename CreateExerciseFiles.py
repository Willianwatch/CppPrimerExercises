import os

def main():
    chapterString = "chapter"
    chapterIndex, exerciseNumber = eval(input("Please input the index of the chapter you choose and the exercise numbers of the chapter:"))
    slash = "/"
    for i in range(1, exerciseNumber + 1):
        exerciseIndex = i
        exerciseName = '{0:s}{1:0>2d}{2:s}{3:0>2d}'.format(chapterString, chapterIndex, slash, exerciseIndex)
        os.mkdir(exerciseName)

if __name__ == "__main__":
    main()
