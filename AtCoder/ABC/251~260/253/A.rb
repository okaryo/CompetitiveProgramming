abc = gets.split.map(&:to_i)
if abc[1] == abc.sort[1]
  puts 'Yes'
else
  puts 'No'
end
