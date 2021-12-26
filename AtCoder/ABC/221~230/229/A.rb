S1 = gets.chomp
S2 = gets.chomp
if S1[0] == '#' && S1[1] == '#'
  puts 'Yes'
elsif S1[0] == '#' && S2[0] == '#'
  puts 'Yes'
elsif S2[0] == '#' && S2[1] == '#'
  puts 'Yes'
elsif S1[1] == '#' && S2[1] == '#'
  puts 'Yes'
else
  puts 'No'
end
