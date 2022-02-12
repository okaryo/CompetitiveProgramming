N = gets.to_i
if -2**31 <= N && N < 2**31
  puts 'Yes'
else
  puts 'No'
end
