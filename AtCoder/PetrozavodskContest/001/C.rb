n = gets.to_i

puts 0
$stdout.flush
l_seat = gets.chomp
l = 0
r = n

20.times do
  mid = (l + r) / 2

  puts mid
  $stdout.flush
  mid_seat = gets.chomp
  exit if mid_seat == 'Vacant'

  if (mid - l).even? ^ (l_seat != mid_seat)
    l = mid
    l_seat = mid_seat
  else
    r = mid + 1
  end
end
