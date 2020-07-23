w = gets.to_i

str = 'DiscoPresentsDiscoveryChannelProgrammingContest2016'
start = 0
while start < str.length
  puts str[start, w]
  start += w
end
