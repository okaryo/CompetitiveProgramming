n = gets.to_i

sum = 1000
while true
  if sum >= n
    puts sum - n
    exit
  else
    sum += 1000
    next
  end
end