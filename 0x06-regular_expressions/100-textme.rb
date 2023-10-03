#!/usr/bin/env ruby

from_number = ARGV[0].scan(/from:(.*?)\]/)
to_number = ARGV[0].scan(/to:(.*?)\]/)
flags = ARGV[0].scan(/flags:(.*?)\]/)
puts [from_number, to_number, flags].join(',')
