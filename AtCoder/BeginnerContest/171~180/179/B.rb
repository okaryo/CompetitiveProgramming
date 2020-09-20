n = gets.to_i
count = 0
n.times do
  x,y = gets.split.map(&:to_i)
  if x == y
    count += 1
  else
    count = 0
  end

  if count == 3
    puts 'Yes'
    exit
  end
end

puts 'No'
