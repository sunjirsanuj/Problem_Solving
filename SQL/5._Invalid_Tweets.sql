SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content) > 15; # CHAR_LENGTH() is return the character length of
                                 # the shell.
