S,T,X = gets.split.map(&:to_i)
if S < T
  if S <= X && X < T
    puts 'Yes'
  else
    puts 'No'
  end
else
  if X < T || S <= X
    puts 'Yes'
  else
    puts 'No'
  end
end
