v,t,s,d = gets.split.map(&:to_i)
if v*t <= d && d <= v*s
  puts 'No'
else
  puts 'Yes'
end
